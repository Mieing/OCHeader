@interface IESECSlidingContainerScrollView : UIScrollView {
    long long _direction;
}

@property (nonatomic) BOOL disableVerticalScrollBegin;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
