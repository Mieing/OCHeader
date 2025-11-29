@class NSArray, RTVVoipParticipator, NSString;

@interface RTVVoipNarrowPreivewViewModel : NSObject

@property (readonly, nonatomic) unsigned long long previewType;
@property (readonly, copy, nonatomic) NSArray *participators;
@property (readonly, copy, nonatomic) RTVVoipParticipator *deputyParticipator;
@property (copy, nonatomic) NSString *statusDescription;

- (id)initWithPreviewType:(unsigned long long)a0 participators:(id)a1;
- (id)initFullVideoPreviewWithParticipator:(id)a0 statusDescription:(id)a1;
- (id)initMultiFullVideoPreviewWithParticipator:(id)a0 deputyParticipator:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
