@class NSString;

@interface IESLiveAnchorDiggPreferenceIMP : NSObject <IESLiveDiggPreferenceService>

@property (nonatomic) BOOL allowDigg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diggAuthNumForRequest;

@end
