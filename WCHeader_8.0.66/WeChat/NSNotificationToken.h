@class NSString;

@interface NSNotificationToken : NSObject {
    id _object;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) id token;

- (void)dealloc;
- (void).cxx_destruct;

@end
