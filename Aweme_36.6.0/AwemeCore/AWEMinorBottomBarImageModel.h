@class NSString, AWEURLModel;

@interface AWEMinorBottomBarImageModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long top;
@property (nonatomic) long long bottom;
@property (nonatomic) long long left;
@property (nonatomic) long long right;
@property (retain, nonatomic) AWEURLModel *urlInfo;
@property (nonatomic) long long cornerRadius;
@property (nonatomic) BOOL hasLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)urlInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
