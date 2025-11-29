@protocol CKAMediaSequenceDiffProtocol, CKASequenceProtocol;

@interface CreationKitAlbum.SequenceChange : _TtCs12_SwiftObject <CKASequenceChangeProtocol>

@property (nonatomic, retain) id<CKASequenceProtocol> oldValue;
@property (nonatomic, retain) id<CKASequenceProtocol> newValue;
@property (nonatomic, retain) id<CKAMediaSequenceDiffProtocol> diff;

@end
