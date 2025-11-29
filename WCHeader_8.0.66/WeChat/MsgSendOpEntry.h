@interface MsgSendOpEntry : NSObject

@property (nonatomic) BOOL voice;
@property (nonatomic) BOOL emoji;
@property (nonatomic) BOOL hideCameraEmoji;
@property (nonatomic) BOOL hideGameEmoji;
@property (nonatomic) BOOL sendBtn;
@property (nonatomic) BOOL dictation;
@property (nonatomic) BOOL hideAttachBtn;
@property (nonatomic) BOOL voice_input;
@property (nonatomic) BOOL image;
@property (nonatomic) BOOL video;
@property (nonatomic) BOOL location;
@property (nonatomic) BOOL location_real_time;
@property (nonatomic) BOOL share_card;
@property (nonatomic) BOOL file;
@property (nonatomic) BOOL favorite;
@property (nonatomic) BOOL video_voip;
@property (nonatomic) BOOL voice_voip;
@property (nonatomic) BOOL multi_voip;
@property (nonatomic) BOOL hong_bao;
@property (nonatomic) BOOL transfer_money;
@property (nonatomic) BOOL ka_quan;
@property (nonatomic) BOOL enterprise_brand;
@property (nonatomic) BOOL chatroomtool;
@property (nonatomic) BOOL solitaireEntry;
@property (nonatomic) BOOL roomLiveEntry;
@property (nonatomic) BOOL musicSearch;
@property (nonatomic) BOOL finder;
@property (nonatomic) BOOL sendGift;

- (id)init;

@end
