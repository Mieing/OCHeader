@class NSString, NSDictionary, AWEVideoPublishViewModel;

@interface ACCEditBaseChangelog : NSObject <CKChangeLog>

@property (weak, nonatomic) AWEVideoPublishViewModel *project;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *creationId;
@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *content;

- (id)track_format;
- (id)makeContent;
- (void)parse;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithProject:(id)a0;

@end
