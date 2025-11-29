@class NSString, AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface ACCTextReaderBizService : NSObject <ACCTextReaderBizService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (copy, nonatomic) NSString *sourceFolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)copyTTSAudioToDraftFolder:(id)a0 textReaderModel:(id)a1 targetFolder:(id)a2 error:(id *)a3;
+ (id)clipRange:(id)a0 startTime:(double)a1 project:(id)a2;

- (void)cancelTextReaderRequest;
- (id)getTextReaderModel:(id)a0;
- (void)applyTextReader:(id)a0 startTime:(double)a1 completion:(id /* block */)a2;
- (void)removeTextReader:(id)a0;
- (id)initWithServiceProvider:(id)a0 sourceFolder:(id)a1;
- (unsigned long long)supportTextReading:(id)a0;
- (void)updateTextReaderClip:(id)a0;
- (void).cxx_destruct;

@end
