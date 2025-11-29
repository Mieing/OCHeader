@class WCDataItem, NSString, WCMediaItem, CMessageWrap, MsgImgSearchPhashMemItem, WCImageSearchReportModel, UIImage;

@interface WCImageSearchEntity : WCSearchEntity

@property (nonatomic) unsigned long long dataType;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) WCMediaItem *snsMediaItem;
@property (retain, nonatomic) WCDataItem *snsItem;
@property (retain, nonatomic) MsgImgSearchPhashMemItem *phashMemItem;
@property (nonatomic) unsigned long long chatType;
@property (retain, nonatomic) WCImageSearchReportModel *reporter;
@property (retain, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *imagefilePath;
@property (copy, nonatomic) NSString *messageUUID;
@property (nonatomic) unsigned long long initiativeSearchSource;
@property (readonly, nonatomic) BOOL isInitiativeSearch;

- (id)init;
- (void)setScene:(unsigned long long)a0;
- (id)getMsgTypeImage;
- (void).cxx_destruct;

@end
