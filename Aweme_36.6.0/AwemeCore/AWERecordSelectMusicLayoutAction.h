@class NSString, AWERecordSelectMusicViewHolder;
@protocol ACCRecorderViewContainer;

@interface AWERecordSelectMusicLayoutAction : NSObject <FPLayoutAction>

@property (weak, nonatomic) AWERecordSelectMusicViewHolder *viewHolder;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSelectMusicButtonIfNeeded;
- (void)updateMusicSelectButtonWithShowCloseButton:(BOOL)a0;
- (void)fixLayout;
- (id)initWithViewHolder:(id)a0 viewContainer:(id)a1;
- (void).cxx_destruct;

@end
