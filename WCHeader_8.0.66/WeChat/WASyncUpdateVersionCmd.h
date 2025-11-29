@interface WASyncUpdateVersionCmd : WASyncBaseCmd

@property (nonatomic) unsigned int lastVersion;
@property (nonatomic) unsigned int launchFallbackDirectlyMinVersion;

- (id)description;

@end
