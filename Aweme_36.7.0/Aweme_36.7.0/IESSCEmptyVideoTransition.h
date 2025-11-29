@class NSString;

@interface IESSCEmptyVideoTransition : NSObject <IESSCVideoTransition>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
