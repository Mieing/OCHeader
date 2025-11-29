@class NSString, IESLivePEDecisionWorkflow, HTSLiveNFAPattern, HTSLiveNFA, NSMutableArray, IESLivePECepPattern;
@protocol IESLivePECepNfaDelegate;

@interface IESLivePECepNfa : NSObject <IESLivePECepTimerFunction> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _data_rwlock;
}

@property (nonatomic) long long matchesCacheSize;
@property (retain, nonatomic) NSMutableArray *partialMatches;
@property (retain, nonatomic) IESLivePEDecisionWorkflow *astExecutor;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HTSLiveNFA *astNFA;
@property (nonatomic) double timeout;
@property (retain, nonatomic) HTSLiveNFAPattern *begin;
@property (weak, nonatomic) id<IESLivePECepNfaDelegate> delegate;
@property (readonly, nonatomic) IESLivePECepPattern *pattern;
@property (nonatomic) BOOL isFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (id)initWithPattern:(id)a0;
- (void)tick;

@end
