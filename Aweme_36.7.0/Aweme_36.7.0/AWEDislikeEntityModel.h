@class NSNumber, NSString;

@interface AWEDislikeEntityModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *factorID;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *serverExtra;
@property (nonatomic) double estimatedHeight;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL hasClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
