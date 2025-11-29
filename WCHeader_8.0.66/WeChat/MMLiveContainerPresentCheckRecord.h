@class NSString;

@interface MMLiveContainerPresentCheckRecord : NSObject

@property (nonatomic) unsigned long long error;
@property (retain, nonatomic) NSString *inheritedVCDesc;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long liveId;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
