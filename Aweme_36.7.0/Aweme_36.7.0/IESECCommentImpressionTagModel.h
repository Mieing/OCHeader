@class NSString, NSNumber;

@interface IESECCommentImpressionTagModel : MTLModel <MTLJSONSerializing, IESECCommentGeneralTagModel>

@property (copy, nonatomic) NSString *formatTagName;
@property (retain, nonatomic) NSNumber *tagID;
@property (retain, nonatomic) NSNumber *tagNumber;
@property (copy, nonatomic) NSString *tagName;
@property (retain, nonatomic) NSNumber *sentiment;
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
- (id)toJSON;
- (BOOL)isPositive;

@end
