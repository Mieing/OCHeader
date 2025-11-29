@class NSNumber, NSString, NSDictionary;

@interface AWESearchCachalotCommentBottomBarConfigModel : NSObject

@property (retain, nonatomic) NSNumber *commentGroupId;
@property (retain, nonatomic) NSNumber *commentServiceId;
@property (copy, nonatomic) NSString *placeHolderText;
@property (copy, nonatomic) NSDictionary *cardTemplateDict;
@property (nonatomic) BOOL enableInsertNewestComment;

- (void).cxx_destruct;

@end
