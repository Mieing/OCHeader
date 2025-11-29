@class NSString, NSMutableSet;

@interface AWENearbySubPageUndertakeManager : NSObject <AWENearbySubPageUndertakeProtocol>

@property (nonatomic) BOOL isSubPageUndertake;
@property (retain, nonatomic) NSMutableSet *subPageIDSet;
@property (copy, nonatomic) NSString *sessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)pauseNearbyVideoWithID:(id)a0 pause:(BOOL)a1;

- (void)shouldPauseNearbyVideoWithID:(id)a0 pause:(BOOL)a1;
- (void)updateIsSubPageUndertake:(BOOL)a0;
- (void)resetSubPageSet;
- (void)updateSubPageSet:(id)a0;
- (void)removeSubPageID:(id)a0;
- (void)resetAllSubPageStates;
- (BOOL)isNearbySubPageUndertake;
- (void).cxx_destruct;
- (id)init;

@end
