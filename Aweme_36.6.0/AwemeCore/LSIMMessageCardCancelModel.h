@class NSString, LSIMMessageCardCancelModelContentItem, LSIMMessageCardCancelModelButtonItem;

@interface LSIMMessageCardCancelModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) LSIMMessageCardCancelModelContentItem *content;
@property (copy, nonatomic) NSString *contentID;
@property (copy, nonatomic) NSString *cardDescription;
@property (copy, nonatomic) NSString *cardSubDescription;
@property (retain, nonatomic) LSIMMessageCardCancelModelButtonItem *actionButtonItem;
@property (retain, nonatomic) LSIMMessageCardCancelModelButtonItem *detailButtonItem;
@property (copy, nonatomic) NSString *jumpURL;
@property (nonatomic) BOOL needRefreshCard;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
