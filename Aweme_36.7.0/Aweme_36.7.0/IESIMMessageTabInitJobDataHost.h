@class NSString;

@interface IESIMMessageTabInitJobDataHost : HTSService <IESIMMessageTabInitJobDataHost>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_taskMetaInfoList;
- (id)p_fetcherList;
- (void)flush;

@end
