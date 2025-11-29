@interface GameRedDotProvider : NSObject <IFindFriendRedDotProvider> {
    BOOL m_useFinderReddot;
}

- (id)initWithUseFinderRedDot:(BOOL)a0;
- (id)checkToGetRedDotInfo;

@end
