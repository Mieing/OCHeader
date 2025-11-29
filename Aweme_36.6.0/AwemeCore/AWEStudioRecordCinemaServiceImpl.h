@class NSString;
@protocol AWEStudioRecordCinemaLayoutConstant;

@interface AWEStudioRecordCinemaServiceImpl : HTSService <AWEStudioRecordCinemaService>

@property (retain, nonatomic) id<AWEStudioRecordCinemaLayoutConstant> sharedConstant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createLayoutConstant;
- (id)sharedLayoutConstant;
- (id)cinemaStatusWithView:(id)a0;
- (void).cxx_destruct;
- (id)bundle;

@end
