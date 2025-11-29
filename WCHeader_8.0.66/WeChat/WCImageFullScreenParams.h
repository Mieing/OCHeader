@class NSArray, WCMomentsPageContext;

@interface WCImageFullScreenParams : NSObject

@property (retain, nonatomic) NSArray *mediaDataArr;
@property (retain, nonatomic) NSArray *originViewArr;
@property (nonatomic) unsigned long long contentItemScene;
@property (retain, nonatomic) WCMomentsPageContext *pageContext;
@property (nonatomic) unsigned int index;
@property (nonatomic) BOOL bNeedEdit;
@property (nonatomic) BOOL bFrom3DTouch;
@property (nonatomic) BOOL bForbidLongPress;
@property (nonatomic) BOOL bSilencePlayLivePhotos;

- (id)initWithMediaDataArr:(id)a0 originViewArr:(id)a1 contentItemScene:(unsigned long long)a2;
- (void).cxx_destruct;

@end
