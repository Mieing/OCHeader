@class NSString, TextViewData, CardRecordViewData;

@interface NewCardRecordViewData : WXPBGeneratedMessage

@property (retain, nonatomic) TextViewData *title;
@property (retain, nonatomic) CardRecordViewData *card;
@property (retain, nonatomic) NSString *viewId;

+ (void)initialize;

@end
