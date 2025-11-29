@class MemoryMappedKV, NSString;

@interface TingAudioTabDataManager : MMObject <TingFlowPlayerNotification>

@property (retain, nonatomic) MemoryMappedKV *mmkv;
@property (nonatomic) BOOL hasShowAudioTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)hasShownListenLaterEducation;
- (void)setHasShownListenLaterEducation:(BOOL)a0;
- (BOOL)shouldShowAudioTabReDot;
- (void)setShouldShowAudioTabReDot:(BOOL)a0;
- (void)addToListenLaterWithItem:(id)a0 inCategory:(id)a1 scene:(int)a2 completion:(id /* block */)a3;
- (void)addToListenLaterWithItem:(id)a0 inCategory:(id)a1 scene:(int)a2 curPlayPos:(double)a3 fillContextBlock:(id /* block */)a4 completion:(id /* block */)a5;
- (void)deleteFromListenLater:(id)a0 scene:(int)a1 completion:(id /* block */)a2;
- (void)jumpToAudioTabAndTopWithScene:(int)a0;
- (void).cxx_destruct;

@end
