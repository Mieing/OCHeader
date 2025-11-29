@class NSString;
@protocol IESLLPerfFMPCalculateDelegate;

@interface IESCalculateDelegateAdapter : NSObject <AWEPerfFMPCalculateDelegate>

@property (weak, nonatomic) id<IESLLPerfFMPCalculateDelegate> sourceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isViewValid:(id)a0;
- (BOOL)isViewNeedInnerFMPStatus:(id)a0;
- (id)identifierOfView:(id)a0;
- (void)viewInnerFMPStabled:(id)a0;
- (void)viewInnerSizeStabled:(id)a0;
- (void)viewInnerStatusAtCheckPoint:(id)a0;
- (void).cxx_destruct;

@end
