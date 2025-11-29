@class UIColor, NSString, NSArray, UIImage, IESLiveLinkMicAudienceInteractEntranceResponse_EntranceList;

@interface IESLiveInteractionEmojiPanelViewItem : IESLiveDynamicModel <IESLiveInteractionEmojiPanelViewItemUIConfig>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSArray *imageUrls;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) BOOL isInGroup;
@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) IESLiveLinkMicAudienceInteractEntranceResponse_EntranceList *posList;
@property (retain, nonatomic) NSArray *skins;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) int status;
@property (nonatomic) int entranceId;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *tagColor;
@property (retain, nonatomic) UIColor *tagBgColor;
@property (nonatomic) BOOL istagLeft;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemWithEntrance:(id)a0;
+ (id)itemWithPosList:(id)a0;

- (void).cxx_destruct;

@end
