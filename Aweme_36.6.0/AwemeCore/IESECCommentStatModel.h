@class NSNumber, NSString;

@interface IESECCommentStatModel : MTLModel <MTLJSONSerializing, IESECCommentGeneralTagModel>

@property (retain, nonatomic) NSNumber *statID;
@property (retain, nonatomic) NSNumber *count;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *statTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isImpressionTag;
- (id)commentTagTrackerName;
- (id)commentTagNumber;
- (id)sentimentTrackerString;
- (id)commentTagID;
- (id)commentTagName;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isPositive;

@end
