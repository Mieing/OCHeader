@class NSString, NSArray;

@interface IESLiveCommentStructureContent : NSObject

@property (copy, nonatomic) NSString *metaContent;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *allParts;

- (id)structurePartsToJSONStringExceptText;
- (void).cxx_destruct;

@end
