@class NSString, AWEVideoPublishViewModel;
@protocol AWECoverEditorTextViewModelDelegate, IESServiceProvider;

@interface AWECoverEditorTextViewModel : NSObject <AWECoverEditorTextServiceProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (copy, nonatomic) id /* block */ constructBlock;
@property (copy, nonatomic) id /* block */ constructBlockForInfoSticker;
@property (weak, nonatomic) id<AWECoverEditorTextViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasUsedRecommendedText;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void).cxx_destruct;

@end
