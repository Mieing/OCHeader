@class NSString, CMCContext;

@interface AWEFantaGokuDataCollectorInfo : NSObject <FantaDataCollectorInfo>

@property (copy, nonatomic) NSString *timing;
@property (retain, nonatomic) CMCContext *contextInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
