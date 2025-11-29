@class NSString, NSObject;
@protocol QBPostDataProtocol;

@interface MttPostItem : NSObject

@property (retain, nonatomic) NSObject<QBPostDataProtocol> *item;
@property (nonatomic) double inTime;
@property (retain, nonatomic) NSString *mainURLString;
@property (nonatomic) BOOL hadReported;
@property (nonatomic) long long markCount;

- (void).cxx_destruct;

@end
