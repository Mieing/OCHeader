@class NSString, NSData;

@interface LarkMediaWebObject : LarkMediaBaseObject

@property (retain, nonatomic) NSString *urlStr;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSData *imageData;

- (id)dataDict;
- (BOOL)valid;
- (void).cxx_destruct;

@end
