@class NSString, NSArray;

@interface ACCInfoStickerConfig : ACCCommonStickerConfig {
    NSArray *_bubbleActionList;
}

@property (nonatomic) long long stickerId;
@property (nonatomic) BOOL needBubble;
@property (nonatomic) BOOL useCustomBubbleAction;
@property (copy, nonatomic) NSString *effectIdentifier;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isImageAlbum;
@property (nonatomic) BOOL isNewStyle;
@property (nonatomic) BOOL disableSelectTime;
@property (copy, nonatomic) id /* block */ selectTime;
@property (copy, nonatomic) id /* block */ pinAction;
@property (copy, nonatomic) id /* block */ updateTransparent;

- (id)bubbleActionList;
- (void)setBubbleActionList:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
