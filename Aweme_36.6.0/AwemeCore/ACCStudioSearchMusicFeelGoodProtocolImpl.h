@class NSString;
@protocol AWESearchFeelGoodManagerProtocol;

@interface ACCStudioSearchMusicFeelGoodProtocolImpl : NSObject <ACCStudioSearchMusicFeelGoodProtocol>

@property (retain, nonatomic) id<AWESearchFeelGoodManagerProtocol> manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)entranceView;
- (void)dismissSurveyEntrance;
- (void)fetchAvailableFeelgoodSurveyWithSearchTab:(id)a0 doodleConfigModel:(id)a1 logExtraDict:(id)a2;
- (void)fetchAvailableFeelgoodSurveyWithSearchTab:(id)a0 title:(id)a1 subtitle:(id)a2 intentInfo:(id)a3 logExtraDict:(id)a4;
- (void).cxx_destruct;

@end
