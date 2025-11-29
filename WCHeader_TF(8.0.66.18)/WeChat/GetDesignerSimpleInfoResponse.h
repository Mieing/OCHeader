@class PersonalDesigner, NSMutableArray, BaseResponse;

@interface GetDesignerSimpleInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) PersonalDesigner *designer;
@property (retain, nonatomic) NSMutableArray *previewEmotion;
@property (retain, nonatomic) NSMutableArray *previewEmoji;
@property (nonatomic) unsigned int emojiTotalCount;

+ (void)initialize;

@end
