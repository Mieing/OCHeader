@class HTSLiveText, NSMutableDictionary, NSString, HTSLiveImage;

@interface IESLiveRebornOpenAssetNode : NSObject <IESLiveEffectNodeProtocol>

@property (retain, nonatomic) NSMutableDictionary *pieceValues;
@property (retain, nonatomic) HTSLiveText *templateText;
@property (nonatomic) long long assetID;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) HTSLiveImage *borderThumb;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL userNameClips;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
