@class NSArray, NSNumber, NSString;

@interface AWEAdConvertCommentDetailModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *commentTags;
@property (retain, nonatomic) NSNumber *commentCount;
@property (retain, nonatomic) NSNumber *positiveRate;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) NSNumber *negativeRate;
@property (retain, nonatomic) NSNumber *applauseCount;
@property (retain, nonatomic) NSNumber *negativeCount;
@property (copy, nonatomic) NSString *tip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
