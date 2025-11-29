@class NSString, MMListenCircleXAttachmentInfo;

@interface MMListenCircleXAggItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *aggId;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) MMListenCircleXAttachmentInfo *attachment;

+ (void)initialize;

@end
