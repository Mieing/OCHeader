@class NSString, NSArray;

@interface AWESearchHPHistoryImageInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *URI;
@property (copy, nonatomic) NSArray *URLList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
