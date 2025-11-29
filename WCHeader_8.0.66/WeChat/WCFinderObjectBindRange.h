@class NSString;
@protocol WCFinderBindableObjectProtocol;

@interface WCFinderObjectBindRange : NSObject

@property (retain, nonatomic) id<WCFinderBindableObjectProtocol> object;
@property (nonatomic) unsigned long long type;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (copy, nonatomic) NSString *content;

+ (id)xmlStyleTagFormatForType:(unsigned long long)a0;
+ (id)xmlStyleTagForType:(unsigned long long)a0;

- (void).cxx_destruct;

@end
