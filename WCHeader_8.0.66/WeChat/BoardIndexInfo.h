@class NSString, UserLocation;

@interface BoardIndexInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int boardIndexScene;
@property (retain, nonatomic) NSString *boardIndex;
@property (retain, nonatomic) UserLocation *location;

+ (void)initialize;

@end
