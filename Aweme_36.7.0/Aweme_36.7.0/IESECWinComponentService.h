@class NSString, IESECWinComponentResponse, IESECWinContext;

@interface IESECWinComponentService : NSObject <IESECWinContextProtocol, IESECWinComponentService> {
    IESECWinContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECWinComponentResponse *componentResponse;
@property (nonatomic) BOOL componentClosed;

@end
