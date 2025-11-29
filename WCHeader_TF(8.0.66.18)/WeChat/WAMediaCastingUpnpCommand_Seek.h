@interface WAMediaCastingUpnpCommand_Seek : WAMediaCastingUpnpCommand

@property (nonatomic) double position;

+ (id)commandWithPosition:(double)a0;

- (id)initWithPosition:(double)a0;
- (id)toTimeString:(double)a0;
- (id)commandXMLBodyString;

@end
