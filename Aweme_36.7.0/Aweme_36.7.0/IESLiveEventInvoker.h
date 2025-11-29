@class NSString, NSMutableArray;

@interface IESLiveEventInvoker : NSObject <NSCopying>

@property (nonatomic) unsigned long long prefrequency;
@property double refreshExpiredTimestamp;
@property (nonatomic) double cvsu;
@property (nonatomic) double mean;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long frequency;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *dateString;
@property (retain, nonatomic) NSMutableArray *sequence;

- (BOOL)calculateExpired;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clean;

@end
