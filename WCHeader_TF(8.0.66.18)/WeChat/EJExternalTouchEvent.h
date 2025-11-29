@class NSArray;

@interface EJExternalTouchEvent : NSObject

@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSArray *touches;
@property (nonatomic) unsigned char length;
@property (nonatomic) long long action;
@property (nonatomic) unsigned char changed;

@end
