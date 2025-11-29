@class NSDictionary, NSString;

@interface TTHTTPBodyPart : NSObject

@property (nonatomic) unsigned long long stringEncoding;
@property (retain, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSString *boundary;
@property (retain, nonatomic) id body;
@property (nonatomic) unsigned long long bodyContentLength;
@property (nonatomic) BOOL hasInitialBoundary;
@property (nonatomic) BOOL hasFinalBoundary;

- (id)stringForHeaders_;
- (void).cxx_destruct;
- (id)getData;

@end
