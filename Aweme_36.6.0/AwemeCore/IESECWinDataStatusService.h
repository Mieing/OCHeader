@class NSError, NSString, IESECWinContext;

@interface IESECWinDataStatusService : NSObject <IESECWinDataStatusService> {
    IESECWinContext *_context;
}

@property (retain, nonatomic) NSError *tabError;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL finishRenderHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
