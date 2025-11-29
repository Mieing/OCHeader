@class NSNumber;

@interface RTVFeedRoomSettings : JSONModel

@property (nonatomic) BOOL enableTextChat;
@property (nonatomic) BOOL enableGuestControl;
@property (nonatomic) BOOL useNewCastPanel;
@property (nonatomic) BOOL isSupportLongVideo;
@property (nonatomic) BOOL isSupportLongVideoScroll;
@property (retain, nonatomic) NSNumber *isSupportRichAweme;
@property (nonatomic) BOOL isSupportMultiSpeed;
@property (nonatomic) BOOL isSupportPinch;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelToJSONDictionary;

- (void)updateEnableTextChat:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
