@class NSString;

@interface IntelligentMediaItem : MMObject <PBCoding>

@property (nonatomic) unsigned int mesLocalID;
@property (nonatomic) long long mesSvrID;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *mediaFilePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_mesLocalID;
+ (void)PBArrayAdd_mesSvrID;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_mediaFilePath;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)copyFieldFromMediaItem:(id)a0;
- (void).cxx_destruct;

@end
