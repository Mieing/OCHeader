@class NSString, NSObject;

@interface IESLiveInteractionLinkerBaseContext : NSObject <IESLiveInteractionLinkerBaseContextProtocol>

@property (readonly, nonatomic) NSObject *rawData;
@property (readonly, copy, nonatomic) NSString *promptString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
