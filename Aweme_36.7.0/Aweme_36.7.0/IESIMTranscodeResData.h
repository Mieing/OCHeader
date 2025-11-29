@class NSURL, NSError;

@interface IESIMTranscodeResData : NSObject

@property (retain, nonatomic) NSURL *mergeUrl;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long notRemuxErrorcode;

- (void).cxx_destruct;

@end
