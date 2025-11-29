@class NSString, NSData, IESGurdResError;

@interface IESGurdResData : NSObject

@property (nonatomic) long long resFrom;
@property (nonatomic) unsigned long long id;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) IESGurdResError *error;

- (void).cxx_destruct;

@end
