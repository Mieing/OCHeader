@class NSError;
@protocol ACCMusicModelProtocol;

@interface ACCEditAutoLoadMusicResultModel : NSObject

@property (retain, nonatomic) id<ACCMusicModelProtocol> autoLoadMusic;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
