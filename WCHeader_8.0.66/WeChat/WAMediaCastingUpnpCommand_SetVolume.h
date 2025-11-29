@interface WAMediaCastingUpnpCommand_SetVolume : WAMediaCastingUpnpCommand

@property (nonatomic) double volume;

+ (id)commandWithVolume:(double)a0;

- (id)initWithVolume:(double)a0;
- (id)commandXMLBodyString;

@end
