@class ACCRepoEditTextReaderModel, NSString;
@protocol ACCEditServiceProtocol;

@interface ACCTextReaderManager : NSObject <ACCTextReaderManagerProtocol>

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) ACCRepoEditTextReaderModel *repoTextReader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelTextReaderRequest;
- (id)initWithRepoTextReader:(id)a0 editService:(id)a1;
- (void)removeTextReaderForKey:(id)a0;
- (void)addTextReader:(id)a0;
- (void)fetchAudioWithTextReader:(id)a0 completion:(id /* block */)a1;
- (id)getTextReader:(id)a0;
- (void).cxx_destruct;

@end
