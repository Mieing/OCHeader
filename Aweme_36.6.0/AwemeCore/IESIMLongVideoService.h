@class NSString;

@interface IESIMLongVideoService : HTSService <IESIMLongVideoService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestPlayletDetailInfo:(id)a0 completeBlock:(id /* block */)a1;

@end
