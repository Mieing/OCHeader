@class NSDateFormatter;

@interface TXTimeFormatterFactory : NSObject {
    NSDateFormatter *_dateFormatter;
}

+ (id)shareInstance;

- (id)init;
- (id)getDateFormatter;
- (void).cxx_destruct;

@end
