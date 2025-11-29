@class MegaVideoLocation, NSString, MegaVideoExtendedReading, NSMutableArray;

@interface MegaVideoDesc : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSMutableArray *media;
@property (nonatomic) unsigned int mediaType;
@property (retain, nonatomic) NSString *mixedBuffer;
@property (retain, nonatomic) MegaVideoLocation *location;
@property (retain, nonatomic) MegaVideoExtendedReading *extReading;
@property (retain, nonatomic) MegaVideoLocation *feedLocation;

+ (void)initialize;

@end
