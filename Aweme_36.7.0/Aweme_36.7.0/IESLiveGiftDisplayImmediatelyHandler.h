@class NSArray, NSString;
@protocol IESLiveGiftDisplayHandlerProtocol;

@interface IESLiveGiftDisplayImmediatelyHandler : NSObject <IESLiveGiftDisplayHandlerProtocol>

@property (retain, nonatomic) NSArray *bannedGiftTypes;
@property (retain, nonatomic) NSArray *bannedAssetTypes;
@property (retain, nonatomic) NSArray *bannedGiftIds;
@property (nonatomic) BOOL enableTrimedAssetGiftShowImmediately;
@property (retain, nonatomic) id<IESLiveGiftDisplayHandlerProtocol> nextHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableDisplayWithGift:(id)a0 context:(id)a1;
- (BOOL)acrossImmediatelyShowWithGift:(id)a0;
- (BOOL)acrossAssetCheckWithGift:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
